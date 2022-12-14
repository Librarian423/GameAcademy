#include "InputMgr.h"
#include <iostream>
#include <algorithm>

//vector<Keyboard::Key>InputMgr::downList;
//vector<Keyboard::Key>InputMgr::ingList;
//vector<Keyboard::Key>InputMgr::upList;
map<Axis, AxisInfo> InputMgr::axisInfoMap;

list<Keyboard::Key>InputMgr::downList;
list<Keyboard::Key>InputMgr::ingList;
list<Keyboard::Key>InputMgr::upList;

void InputMgr::Init()
{
	//Horizontal
	AxisInfo info;
	info.axis = Axis::Horizontal;
	info.positives.push_back(Keyboard::Key::D);
	info.positives.push_back(Keyboard::Key::Right);
	info.negatives.push_back(Keyboard::Key::A);
	info.negatives.push_back(Keyboard::Key::Left);
	axisInfoMap.insert({ info.axis,info });

	//Vertical
	info.axis = Axis::Vertical;
	info.positives.push_back(Keyboard::Key::S);
	info.positives.push_back(Keyboard::Key::Down);
	info.negatives.push_back(Keyboard::Key::W);
	info.negatives.push_back(Keyboard::Key::Up);
	axisInfoMap.insert({ info.axis,info });
}

void InputMgr::ClearInput()
{
	downList.clear();
	upList.clear();
}

void InputMgr::UpdateInput(Event& ev)
{
	switch ( ev.type )
	{
	case Event::EventType::KeyPressed:
		//std::cout <<"KeyPressed " << ev.key.code << std::endl;
		if ( !GetKey(ev.key.code ))
		{
			downList.push_back(ev.key.code);
			ingList.push_back(ev.key.code);
		}
		break;
	case Event::EventType::KeyReleased:
		//std::cout <<"KeyReleased " << ev.key.code << std::endl;
		ingList.erase(find(ingList.begin(), ingList.end(), ev.key.code), ingList.end());
		upList.push_back(ev.key.code);
		break;
	default:
		break;
	}
	//std::cout << ev.key.code << std::endl;
}

bool InputMgr::GetKeyDown(Keyboard::Key key)
{
	return find(downList.begin(), downList.end(), key) != downList.end();
}

bool InputMgr::GetKey(Keyboard::Key key)
{
	return find(ingList.begin(), ingList.end(), key) != ingList.end();
}

bool InputMgr::GetKeyUp(Keyboard::Key key)
{
	return find(upList.begin(), upList.end(), key) != upList.end();
}

float InputMgr::GetAxisRaw(Axis axis)
{
	
	const AxisInfo& info = axisInfoMap[axis];
	for ( auto key : info.negatives )
	{
		if ( GetKey(key) )
		{
			return -1.f;
		}
	}
	for ( auto key : info.positives )
	{
		if ( GetKey(key) )
		{
			return 1.f;
		}
	}
	
	return 0.f;
}
