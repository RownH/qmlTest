#include<stdio.h>
#include<stdlib.h>
#define RING_BUFFER_SUCCESS 0
#define RING_BUFFER_OVERFLOW -1
#define RING_BUFFER_UNDERFLOW -2
#define RING_BUFFER_NOMEMORY -3
#define RING_BUFFER_INVALID_PARAM -4

#define RING_BUFFER_FULL 0x1

struct ring_buffer{
      int *buffer;
      int size;
      int head;
      int tail;
      int flags;
};

int ring_buffer_init(struct ring_buffer *rb,int size){
    if(!rb||!size)
        return RING_BUFFER_INVALID_PARAM;

        rb->buffer=(int*)malloc(size *sizeof(int));
        if(!rb->buffer)
            return RING_BUFFER_NOMEMORY;

        rb->size=size;
        rb->head=0;
        rb->tail=0;
        rb->flags=0;
        return RING_BUFFER_SUCCESS;
}

int ring_buffer_insert_head(struct ring_buffer *rb,int n)
{
    if((rb->head+1)%rb->size==rb->tail){
        return RING_BUFFER_OVERFLOW;
    }
    rb->buffer[rb->head]=n;
    rb->head=(rb->head+1)%rb->size;
    return RING_BUFFER_SUCCESS;


}
int ring_buffer_remove_tail(struct ring_buffer *rb,int *pn)
{
    if((rb->tail+1)%rb->size == rb->head){
        return RING_BUFFER_UNDERFLOW;
    }
    *pn=rb->buffer[rb->tail];
    rb->tail=(rb->tail+1)%rb->size;
    return *pn;
}
int main(){
    struct ring_buffer *m;
    ring_buffer_init(m,3);
    ring_buffer_insert_head(m,10);
    ring_buffer_insert_head(m,20);
    ring_buffer_insert_head(m,20);
    ring_buffer_insert_head(m,20);
    int a=0;
    int *p=(int*) malloc(sizeof (int));
    ring_buffer_remove_tail(m,p);
    ring_buffer_remove_tail(m,p);

    ring_buffer_remove_tail(m,p);
    printf("%d",*p);
}
