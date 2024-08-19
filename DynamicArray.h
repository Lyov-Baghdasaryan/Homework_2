class DynamicArray{
	private:
		int *arr;
		int size;
		int capacity;
	public:
		DynamicArray();
		~DynamicArray();
		void Push(int value);
		void PrintArr();
};
