#include<iostream>

class ReversArray
{
public:
	ReversArray(int row, int col) :_array{ nullptr }, _revArray{ nullptr }, _row{ row }, _col{ col }{}

	int** createArray()
	{
		_array = new int* [_row];
		for (int i = 0; i < _row; ++i)
			_array[i] = new int[_col];
		_fillArray();
		return _array;
	}
	int** invertedArray()
	{
		_revArray = new int* [_col];
		for (size_t i = 0; i < _col; i++)
			_revArray[i] = new int[_row];

		for (size_t i = 0; i < _row; ++i)
			for (size_t j = 0; j < _col; ++j)
				_revArray[j][i] = _array[i][j];

		for (size_t i = 0; i < _col; ++i)
		{
			for (size_t j = 0; j < _row; ++j)
				std::cout << _revArray[i][j] << ' ';
			std::cout << std::endl;
		}
		return _revArray;
	}
	void showArray()
	{
		for (size_t i = 0; i < _row; ++i)
		{
			for (size_t j = 0; j < _col; ++j)
				std::cout << _array[i][j] << ' ';
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	int getRow() { return _row; }
	int getCol() { return _col; }


	~ReversArray()
	{
		for (size_t i = 0; i < _col; i++)
			delete _array[i];
		delete _array;

		for (size_t i = 0; i < getCol(); i++)
			delete _revArray[i];
		delete _revArray;
	}
private:
	int** _array;
	int** _revArray;
	int _row;
	int _col;

	int** _fillArray()
	{
		for (size_t i = 0; i < _row; ++i)
			for (size_t j = 0; j < _col; ++j)
				_array[i][j] = rand() % 10;
		return _array;
	}

};

int main()
{
	ReversArray ra(2, 4);
	ra.createArray();
	ra.showArray();
	ra.invertedArray();
}