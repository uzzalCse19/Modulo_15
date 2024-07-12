#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    Node* next;
    Node* prev;
    int val;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack
{
public:
void push(Node* &head,Node* &tail,int v)
{
    Node* newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
   newNode->prev=tail;
    tail->next=newNode;
    tail=tail->next;
}
};
class myQueue
{
    public:
    void push(Node* &head2,Node* &tail2,int v){
    Node* newNode=new Node(v);
    if(head2==NULL)
    {
        head2=newNode;
        tail2=newNode;
        return;
    }
   newNode->prev=tail2;
    tail2->next=newNode;
    tail2=tail2->next;
}

};
int main()
{
    Node* head2=NULL;
Node* tail2=NULL;
Node* head=NULL;
Node* tail=NULL;
    int n,m;
    cin>>n>>m;
    myStack st;
    myQueue q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(head,tail,x);
    }
  for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(head2,tail2,x);
    }
    int flag=0;
    if(n!=m)
    {
        cout<<"NO"<<endl;
        flag=1;
    }
    else
    {
        while(head2!=NULL)
        {
            if(head2->val!=tail->val)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;;
            }
            head2=head2->next;
            tail=tail->prev;
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    return 0;
}