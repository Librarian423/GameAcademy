#include <iostream>
#include <list>

using namespace std;
// 경험치를 저장할 수 있는 최대 개수
const int MAX_EXP_COUNT = 100;
// 경험치 저장 스택 클래스

enum class PopModes
{
    LIFO,
    FIFO
};

template <typename T>
class Stack
{
private:
    list<T> m_aData;
    PopModes mode;
public:
    Stack()
        :mode(PopModes::LIFO)
    { 
        Clear(); 
    }
    // 초기화 한다.
    void Clear() { m_aData.clear(); }
    // 스택에 저장된 개수
    int Count() { return m_aData.size(); }
    // 저장된 데이터가 없는가?
    bool IsEmpty() { return m_aData.empty(); }
    // 경험치를 저장한다.
    void push(const T& Exp)
    {
        // 경험치를 저장 후 개수를 하나 늘릮다.
        m_aData.push_back(Exp);
    }

    // 스택에서 경험치를 빼낸다.
    T pop()
    {
        if ( mode == PopModes::LIFO )
        {
            //LIFO
            T temp = m_aData.back();
            m_aData.pop_back();
            return temp;
        }
        else
        {
            //FIFO
            T temp = m_aData.front();
            m_aData.pop_front();
            return temp;
        }
    }
    void selectMode(int mode)
    {
        if ( mode == 1 )
        {
            this->mode = PopModes::LIFO;
        }
        else
        {
            this->mode = PopModes::FIFO;
        }
        
    }
};

int main()
{
    Stack<double> kExpStack;
    PopModes mode;
    cout << "첫번째 게임 종료- 현재 경험치 145.5f" << endl;
    kExpStack.push(145.5f);
    cout << "두번째 게임 종료- 현재 경험치 183.25f" << endl;
    kExpStack.push(183.25f);
    cout << "세번째 게임 종료- 현재 경험치162.3f" << endl;
    kExpStack.push(162.3f);
    int Count = kExpStack.Count();
    kExpStack.selectMode(2);
    for ( int i = 0; i < Count; ++i )
    {
        cout << "현재 경험치->" << kExpStack.pop() << endl;
    }
    return 0;
}

/*
첫번째 게임 종료- 현재 경험치 145.5f
두번째 게임 종료- 현재 경험치 183.25f
세번째 게임 종료- 현재 경험치162.3f
현재 경험치->162.3
현재 경험치->183.25
현재 경험치->145.5
*/