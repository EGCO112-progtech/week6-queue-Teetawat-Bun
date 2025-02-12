

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
  q->headPtr = x;
  q->tailPtr = NULL;
  if (q->size == 0) {
        q->headPtr = new_node;
        q->tailPtr = new_node;
    } 
  else {
        q->tailPtr->nextPtr = new_node;
        q->tailPtr = new_node;
    }
    q->size++;
}



int dequeue_struct(Queue *q){
  if(q->size>0){
    NodePtr t = q->headPtr;
    q->headPtr = q->headPtr->nextPtr;
        if (q->size == 1) {
            q->tailPtr = NULL;
        }
    free(t);
    q->size--;
  }
  else{
    printf("Empty queue");
  return 0;
  }
}

