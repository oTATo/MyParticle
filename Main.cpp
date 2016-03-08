#include <stdio.h>

template <typename Particle>
class PartcleFilter
{
private:
	int particleNum;
	Particle *pParticleList;

public:
	ParticleFilter(){}

	void init(int particleNum)
	{
		if(particleNum < 0)
			particleNum = 0;
		this->particleNum = particleNum;
		pParticleList = new Particle [particleNum];
	}

	virtual void procWeight() = 0;
};

int main()
{


	return 0;
}