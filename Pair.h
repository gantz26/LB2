#ifndef  PAIR_H
#define PAIR_H

template<class A, class B>
class Pair
{
private:
	A key;
	B value;

public:
	Pair();
	Pair(const A& a, const B& b);

	const A& getKey() const;
	const B& getValue() const;
};

template<class A, class B>
Pair<A, B>::Pair()
	: key{}, value{}
{

}

template<class A, class B>
Pair<A, B>::Pair(const A& a, const B& b)
	: key(a), value(b)
{

}

template<class A, class B>
const A& Pair<A, B>::getKey() const
{
	return key;
}

template<class A, class B>
const B& Pair<A, B>::getValue() const
{
	return value;
}

#endif