#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include <vector>
#include <map>

using namespace sf;
using namespace std;

//스태틱 함수를 이요해서 키보드 밋 마우스 입력을 검사할 수 있는 클래스

enum class Axis
{
	Horizontal,
	Vertical,
};

struct AxisInfo
{
	Axis axis;
	list<Keyboard::Key> positives;
	list<Keyboard::Key> negatives;
};

class InputMgr
{
public:
	static void Init();
	static void ClearInput();
	static void UpdateInput(Event& ev);

	static bool GetKeyDown(Keyboard::Key key);
	static bool GetKey(Keyboard::Key key);
	static bool GetKeyUp(Keyboard::Key key);

	static float GetAxisRaw(Axis axis);

private:
	static map<Axis, AxisInfo> axisInfoMap;

	static list<Keyboard::Key>downList;
	static list<Keyboard::Key>ingList;
	static list<Keyboard::Key>upList;

	/*static vector<Keyboard::Key>downList;
	static vector<Keyboard::Key>ingList;
	static vector<Keyboard::Key>upList;*/
};

