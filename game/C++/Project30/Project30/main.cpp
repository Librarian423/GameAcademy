#include <iostream>
#include <list>

using namespace std;
// ����ġ�� ������ �� �ִ� �ִ� ����
const int MAX_EXP_COUNT = 100;
// ����ġ ���� ���� Ŭ����

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
    // �ʱ�ȭ �Ѵ�.
    void Clear() { m_aData.clear(); }
    // ���ÿ� ����� ����
    int Count() { return m_aData.size(); }
    // ����� �����Ͱ� ���°�?
    bool IsEmpty() { return m_aData.empty(); }
    // ����ġ�� �����Ѵ�.
    void push(const T& Exp)
    {
        // ����ġ�� ���� �� ������ �ϳ� �Ð���.
        m_aData.push_back(Exp);
    }

    // ���ÿ��� ����ġ�� ������.
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
    cout << "ù��° ���� ����- ���� ����ġ 145.5f" << endl;
    kExpStack.push(145.5f);
    cout << "�ι�° ���� ����- ���� ����ġ 183.25f" << endl;
    kExpStack.push(183.25f);
    cout << "����° ���� ����- ���� ����ġ162.3f" << endl;
    kExpStack.push(162.3f);
    int Count = kExpStack.Count();
    kExpStack.selectMode(2);
    for ( int i = 0; i < Count; ++i )
    {
        cout << "���� ����ġ->" << kExpStack.pop() << endl;
    }
    return 0;
}

/*
ù��° ���� ����- ���� ����ġ 145.5f
�ι�° ���� ����- ���� ����ġ 183.25f
����° ���� ����- ���� ����ġ162.3f
���� ����ġ->162.3
���� ����ġ->183.25
���� ����ġ->145.5
*/