#include <iostream>

using namespace std;

// For this homework, you are going to implement an extendable vector based queue that 
// uses "jump" trick to save space. 
// Finish function 
//              front() that prints the first element in the queue
//              deque() that dequeues the queue
//          	enque(val) that enqueues val to the queue
//              print_vect() that prints out vect_que.
// Demonstrate that your code works in main.
// Refer to class PPT if you forgot all the different cases. 

template <class T>
class vect_queue {
	std::vector<T> vect_que;
	size_t size_;
	int que_front_;
public:
	template <class T>
	vect_queue(T val) {
		vect_que.push_back(val);
		size_ = 1;
		que_front_ = 0;
	}
	T front() const;
	void deque();
	void enque(T val);
	void print_vect() const;
};

template <class T>
T vect_queue<T>::front() const{

}



int main()
{   
    //Demonstrate your code works by adding/removing values in a vect_que class 
    //object. Print out your result.
    //You should include front index of queue, back index of queue, and the entire
    //vector (not queue) for each case.
    
    //case 1: add to an empty queue
    
    //case 2: add to a non-empty queue without jump 
    
    //case 3: add to a non-empty queue with a jump
    
    //case 4: remove from a queue with number of elements > 1 
    //        and que.front not at vect.back

    //case 5: remove from a queue with number of elements > 1 
    //        and que.front at vect.back
    
    //case 6: remove from a queue with 1 element in it and que.front 
    //        not at vect[0]
    
    
    cout<<"\nprogram ends here.\n";

    return 0;
}
