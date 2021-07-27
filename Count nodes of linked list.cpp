class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        Node *temp = head;
        int i =0;
        
        while( temp != NULL)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
};
