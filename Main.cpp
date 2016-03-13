#include <stdio.h>

class Particle
{
private:
	double Weight;

public:

};

template <typename Particle>
class ParticleFilter
{
private:
	int particleNum;
	Particle *pParticleList;

	virtual void procWeight() = 0;
	virtual void procPredict() = 0;
	virtual void procLikelihood() = 0;
	virtual void procResample() = 0;

	void setParticleNum(int particleNum)
	{
		if(particleNum < 0)
			particleNum = 0;
		this->particleNum = particleNum;
		if(pParticleList) delete [] Particle;
		pParticleList = new Particle [particleNum];
	}

public:
	ParticleFilter(int particleNum)
	{
		setParticleNum(particleNum);
	}

	void init(int particleNum)
	{
		if(particleNum < 0)
			particleNum = 0;
		this->particleNum = particleNum;
		pParticleList = new Particle [particleNum];
	}

	void update()
	{
		procPredict();
		procWeight();
		procResample();
	}
};

int main()
{


	return 0;
}