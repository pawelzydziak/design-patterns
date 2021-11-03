#ifndef DESIGN_PATERNS_SINGLETON_H
#define DESIGN_PATERNS_SINGLETON_H


class Singleton
{
public:
	Singleton(Singleton &other) = delete;

	void operator=(const Singleton &) = delete;

	static Singleton *getInstance()
	{
		if (singleton == nullptr)
			singleton = new Singleton;
		return singleton;
	}

	int doSomething()
	{
		return 11;
	}

private:
	static Singleton *singleton;
	Singleton() = default;
};

Singleton *Singleton::singleton = nullptr;
#endif //DESIGN_PATERNS_SINGLETON_H
