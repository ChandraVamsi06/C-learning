//Implementation of a circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node *next;
};
typedef struct node Node;
Node* head = NULL;
void insert_at_head(int data){
    Node* newn = (Node*)malloc(sizeof(Node));
    newn->val = data;
    newn->next = NULL;//newNode->next = newn;
    if(head == NULL){
        head = newn;
        newn->next = head;//CIRCULAR NAUTRE
    }    
    else{
        Node* temp = head;
        while(temp->next != head){
        	temp = temp->next;
		}
		temp->next = head;
		newn->next = head;
        head = newn;
        /*do{
            temp = temp->next;
        }while(temp->next != head);
        newn->next = head;
        head = newn;
        temp->next = head;*/
    }
}
void insert_at_tail(int data){
    Node* newn = (Node*)malloc(sizeof(Node));
    newn->val = data;
    newn->next = NULL;
    if(head == NULL){
        head = newn;
        newn->next = head;
    }    
    else{
        Node* temp = head;
        do{
            temp = temp->next;
        }while(temp->next != head);
        newn->next = head;
        temp->next = newn;
    }
}
void delete_at_head(){
    if(head == NULL)
    printf("No Linked List Found\n");
    else{
        Node* temp = head;
        do{
            temp = temp->next;
        }while(temp->next != head);
        temp->next = head->next;
        Node* del = head;
        head = head->next;
        free(del);
    }
}
void delete_at_tail(){
    if(head == NULL)
    printf("No Linked List Found\n");
    else{
        Node* temp = head;
        do{
            temp = temp->next;
        }while(temp->next->next != head);
        Node* del = temp->next;
        temp->next = head;
        free(del);
    }
}
void display(){
    Node* temp = head;
    if(head == NULL)
    printf("No Linked List Found\n");
    do{
        printf("%d ",temp->val);
        temp = temp->next;
    }while(temp!=head);
    printf("\n");
}
void display_n_nodes(){
	int n,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	Node *temp = head;
	for(i = 0; i < n; i++){
		printf("%d ",temp->val);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	//infinite loop
	while(1){
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Display\n4. Display n nodes\n5. Delete at head\n6. Delete at tail\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_head(val); //function call
		}
		else if(ch == 2){
			//implement insert at tail
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_tail(val); //function call
		}
		else if(ch == 3){
			//implement Display
			display();
		}
		else if(ch == 4){
			display_n_nodes();
		}
		
		else if(ch == 5){
			//implement delete at head
			delete_at_head();
		}
		else if(ch == 6){
			//implement delete at tail
			delete_at_tail();
		}
		else{
			printf("Thank You for the testing. AIDEU!!\n");
			break;
		}
	}
	return 0;
}
