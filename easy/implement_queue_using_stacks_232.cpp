class Queue{
public:
	void push(int x) {
		main_stack.push(x);
	}

	void pop(void) {
		dump(main_stack, slave_stack);
		slave_stack.pop();
		dump(slave_stack, main_stack);
	}

	int peek(void) {
		int ret;
		dump(main_stack, slave_stack);
		ret = slave_stack.top();
		dump(slave_stack, main_stack);
		return ret;
	}

	bool empty(void) {
		return main_stack.empty();
	}
private:
	stack<int> main_stack, slave_stack;
	void dump(stack<int>& from_stack, stack<int>& to_stack) {
		while(!from_stack.empty()) {
			to_stack.push(from_stack.top());
			from_stack.pop();
		}
	}
};
