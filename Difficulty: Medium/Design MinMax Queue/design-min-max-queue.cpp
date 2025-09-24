class SpecialQueue {

  public:
  queue<int>q;
  deque<int>minq,maxq;

    void enqueue(int x) {
       q.push(x);
       while(!minq.empty() && minq.back()>x){
           minq.pop_back();
           
       }
          minq.push_back(x);
         while(!maxq.empty() && maxq.back()<x){
           maxq.pop_back();
          
       }
        maxq.push_back(x);

    }

    void dequeue() {
         if (q.empty()) return;
        int val = q.front();
        q.pop();
        if(!minq.empty() && minq.front()==val){
            minq.pop_front();
        }
        if(!maxq.empty() && maxq.front()==val){
            maxq.pop_front();
        }
       
      
    }

    int getFront() {
         return q.front();
    }

    int getMin() {
        return minq.front();
    }

    int getMax() {
        return maxq.front();
    }
};