/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
Node *deleteHead(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }
  Node *temp = head;
  head = head->next;
  head->prev = nullptr;
  temp->next = nullptr;
  delete temp;
  return head;
}
Node *deleteTail(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }

  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }

  Node *prevNode = tail->prev;
  prevNode->next = NULL;
  tail->prev = NULL;

  delete tail;
  return head;
}
class Solution {
  public:
       Node* delPos(Node* head, int x) {
        if (head == NULL) return NULL;

        int cnt = 0;
        Node* temp = head;

        while (temp != NULL) {
            cnt++;
            if (cnt == x) break;
            temp = temp->next;
        }

        if (temp == NULL) return head;

        Node* previous = temp->prev;
        Node* front = temp->next;

        if (previous == NULL && front == NULL) {
            return NULL; 
        }
        else if (previous == NULL) {
            return deleteHead(head);
        }
        else if (front == NULL) {
            return deleteTail(head);
        }

        previous->next = front;
        front->prev = previous;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;

        return head;
    }
};
