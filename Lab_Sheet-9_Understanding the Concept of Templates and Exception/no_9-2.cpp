

#include <iostream>

const int max = 20;
template <class T>

class Queue
{
    T arr[max];
    int bot = -1;
    int top = -1;
    int arrsize;

public:
    void queue(T data)
    {
        arr[++bot] = data;
    };

    void dequeue()
    {
        for (int i = 0; i <= bot; i++)
        {
            arr[i] = arr[i + 1];
        }
        bot--;
    }
    T gettop()
    {
        return arr[0];
    }
    T getbot()
    {
        return arr[bot];
    }
};
int main()
{
    Queue<int> q;
    q.queue(5);
    q.queue(6);
    q.queue(7);
    q.queue(8);
    std::cout << "top=" << q.gettop() << std::endl;
    std::cout << "bot=" << q.getbot() << std::endl;
    q.dequeue();
    std::cout << "top=" << q.gettop() << std::endl;
    std::cout << "bot=" << q.getbot() << std::endl;
    return 0;
};
