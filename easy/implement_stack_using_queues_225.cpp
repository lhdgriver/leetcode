class Stack {
public:
	void push(int x) {
		master_queue.push(x);
	}

	void pop() {
		while(master_queue.size() > 1) {
			slave_queue.push(master_queue.front());
			master_queue.pop();
		}
		master_queue.pop();
		while(slave_queue.size() > 0) {
			master_queue.push(slave_queue.front());
			slave_queue.pop();
		}
	}

	int top() {
		int ret;
		while(master_queue.size() > 0) {
			ret = master_queue.front();
			slave_queue.push(ret);
			master_queue.pop();
		}
		while(slave_queue.size() > 0) {
			master_queue.push(slave_queue.front());
			slave_queue.pop();
		}

		return ret;
	}

	bool empty() {
		return master_queue.empty();
	}
private:
	queue<int> master_queue;
	queue<int> slave_queue;
};
