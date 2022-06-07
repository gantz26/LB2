#ifndef LIST_H
#define LIST_H

template<class T, size_t N>
class List
{
private:
	T data[N];
	size_t sizeArray;

public:
	List();
	size_t size() const;

	const T& operator[](int index) const;
	void operator+=(const T& obj);
};

template<class T, size_t N>
List<T, N>::List()
	: data{}, sizeArray(0)
{

}

template<class T, size_t N>
size_t List<T, N>::size() const
{
	return sizeArray;
}

template<class T, size_t N>
const T& List<T, N>::operator[](int index) const
{
	return data[index];
}

template<class T, size_t N>
void List<T, N>::operator+=(const T& obj)
{
	if (sizeArray < N)
	{
		data[sizeArray++] = obj;
	}
}

#endif