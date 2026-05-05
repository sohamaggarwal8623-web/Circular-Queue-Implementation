# include <stdio.h>
# include<stdlib.h>

typedef struct queue{
    int size;
    int front;
    int end;
    int*array;
}queue;

int isfull(queue*q){
    if(q->end==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(queue*q,int value){
    if(q->end== -1 && q->front ==0){
        q->end=(q->end+1)%q->size;
        q->array[q->end]=value;
    }
    else if((q->end+1)%q->size== q->front){
         printf("overflowed");
    }
    
    else{
        q->end=(q->end+1)%q->size;
        q->array[q->end]=value;
    }
}


void dequeue(queue*q){
    if(q->end==-1){
        printf("underflowed");
    }
    else if(q->front==q->end){
        q->end=-1;
        q->front=0;
    }
    else{
        q->front=(q->front+1)%q->size;

    }
}

void print(queue*q){ 
    if(q->end<=q->front){
        for(int i=0;i<=q->size-1;i++){
        printf("%d\n",q->array[i]);
    }}
    else{
    for(int i=q->front;i<=q->end;i++){
        printf("%d\n",q->array[i]);}
    }}

int main(){
    queue*q=(queue*)malloc(sizeof(queue));
    q->size=4;
    q->front=0;
    q->end=-1;
    q->array=(int*)malloc(q->size*sizeof(int));

    enqueue(q,10);
     enqueue(q,20);
      enqueue(q,30);
       enqueue(q,40);

       print(q);

       dequeue(q);
        dequeue(q);

        printf("\n");
        print(q);

        enqueue(q,10);
        enqueue(q,20);
        printf("\n");
        
     print(q); 
    return 0;
}