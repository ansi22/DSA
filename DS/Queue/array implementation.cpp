Class Queue
{
    int *arr;
    int start, end, cursize, maxsize;

public:
    Queue()
    {
        arr = new int[16];
        start = -1;
        end = -1;
        cursize = 0;
    }
    Queue(int maxsize)
    {
        (*this).maxsize = maxsize;
        arr = new int[maxsize];
        start = -1;
        end = -1;
        cursize = 0;
    }
    void push(int newelement)
    {
        if (cursize == maxsize)
        {
            cout << "Queue is full\n";
            exit(1);
        }
        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
            end = (end + 1) % maxsize;
        arr[end] = newelement;
        cout << "Pushed\n";
        cursize++;
    }
    int pop()
    {
        if (start == -1)
        {
            cout < < < "Empty Queue\n";
        }
        int popped = arr[start];
        if (cursize == 1)
        {
            start = -1;
            end = -1;
        }
        else
            start = (start + 1) % maxsize;
        cursize--;
        return popped;
    }
    int top()
    {
        if (start == -1)
        {
            cout << "Queue is Empty\n";
            exit(1);
        }
        return arr[start];
    }
    int size()
    {
        return cursize;
    }
};