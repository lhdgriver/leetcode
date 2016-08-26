class MinStack {
public:
	MinStack() {
	}

	void push(int x) {
		master_stack.push(x);
		if (min_stack.empty() || min_stack.top() > x)
			min_stack.push(x);
		else
			min_stack.push(min_stack.top());

	}

	void pop() {
		master_stack.pop();
		min_stack.pop();
	}

	int top() {
		return master_stack.top();
	}

	int getMin() {
		return min_stack.top();
	}
private:
	stack<int> master_stack;
	stack<int> min_stack;
};
