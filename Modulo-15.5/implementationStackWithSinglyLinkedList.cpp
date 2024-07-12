c:\Users\Uzzal\Desktop\Modulo_15_leetCode_Coding_Ninjas/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    

public:
Node* head=NULL;

    int size=0;
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        if(size==0) return true;
        else return false;
    }

    void push(int data)
    {
        //Write your code here
        size++;
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            return;
        }
       newNode->next=head;
       head=newNode;

    }

    void pop()
    {
        //Write your code here
        
        if(head==NULL) return;
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;
        size--;
       

    }

    int getTop()
    {
        //Write your code here
      if(head==NULL) return -1;
       else return head->data;
    }
};