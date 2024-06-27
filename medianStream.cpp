class MedianFinder {
public:

priority_queue<int> left; //max heap
priority_queue<int ,vector<int> , greater<int>>right; //min heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size()== 0 and right.size()==0){
          left.push(num);
        }
        else{
            //size equal
            if(left.size()==right.size()){
                if(num<=right.top()){
                    left.push(num);
                }
                else{
                    //num is badha than right top
                    left.push(right.top());
                    right.pop();
                    right.push(num);
                }
            
            }
            else{ //not equal hai toh left mein 1 zyada hai from right
                if(num>=left.top()){
                    right.push(num);
                }
                else{
                    right.push(left.top());
                    left.pop();
                    left.push(num);
                }
            }

        }
        
           
    }
    
    double findMedian() {
        if(left.size()==right.size()){
            return (left.top()+right.top())/2.0;
        }
        else{
            return left.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */