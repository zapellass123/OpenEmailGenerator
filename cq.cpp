#include <iostream>
using namespace std;
const int SIZE=3;

class CQueue{
    private:
    int front;
    int rear;
    int arr[SIZE];
    public:
    CQueue(){
        front=-1;
        rear=-1;
    }

    bool isEmpty(){
        return (front==-1 && rear==-1);
    }

    bool isFull(){
        return (rear+1)%SIZE==front;
    }

    void enq(int elem){
        if(isFull()){
            cout<<"Queue Full"<<endl;
            return;
        }
        if(isEmpty())
            front++;
        rear=(rear+1)%SIZE;
        arr[rear]=elem;
    }

    int deq(){
        if(isEmpty()){
            cout<<"Empty queue"<<endl;
            return -1;
        }
        int elem=arr[front];
        if (front==rear)
            front=rear=-1;
        else
            front=(front+1)%SIZE;
        return elem;

    }

    void display(){
        int i;
        for (i=front;i!=rear;i=(i+1)%SIZE){
            cout<<arr[i]<<' ';
        }
        cout<<arr[i]<<endl;
    }
};

int main(){
    CQueue cq;
    int choice, item;
    do
    {
        cout<<"1.Insert"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Input the element for insertion in queue : ";
            cin>>item;
            cq.enq(item);
	        break;
	    case 2:
            cq.deq();
	        break;
        case 3:
            cq.display();
	        break;
	    case 4:
	        break;
	    default:
	        cout<<"Wrong choice"<<endl;
	    }
    } while(choice != 4);
    return 0;

}
