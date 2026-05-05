## Features

- ✅ **Enqueue**: Add elements to the queue
- ✅ **Dequeue**: Remove elements from the front
- ✅ **Print**: Display all elements in queue order
- ✅ **Overflow Detection**: Prevents adding elements when queue is full
- ✅ **Underflow Detection**: Prevents removing from empty queue

## How to Compile & Run

```bash
gcc -o queue queue.c
./queue
```

## Functions

| Function | Description |
|----------|-------------|
| `enqueue(queue *q, int value)` | Adds an element to the end |
| `dequeue(queue *q)` | Removes an element from the front |
| `print(queue *q)` | Prints all elements in order |
| `isfull(queue *q)` | Checks if queue is full |

## Usage Example

```c
queue *q = (queue*)malloc(sizeof(queue));
q->size = 4;
q->front = 0;
q->end = -1;
q->array = (int*)malloc(q->size * sizeof(int));

enqueue(q, 10);
enqueue(q, 20);
dequeue(q);
print(q);
```

## Known Limitations

- Fixed size queue (cannot dynamically resize)
- Print function has issues with wraparound cases when `front > end`
- No peek operation to view front element without dequeuing

## Future Improvements

- [ ] Add dynamic resizing
- [ ] Fix print function for wraparound cases
- [ ] Add peek() function
- [ ] Add size() function to return current number of elements
- [ ] Add error handling with return codes

## License

MIT / Feel free to use and modify
