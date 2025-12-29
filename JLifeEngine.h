#pragma once

#ifdef JLIFEENGINE_EXPORTS
#define JLIFE_API __declspec(dllexport)
#else
#define JLIFE_API __declspec(dllimport)
#endif

class JLIFE_API Engine {
public:
	void initialize();
	void update(float deltaTime);
	void shutdown();
};

