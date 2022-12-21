#pragma once
#ifndef Triunghi_h
#define Triunghi_h

class Triunghi {
	public :
		double a;
		double b;
		double c;
		virtual void arie() = 0;
		virtual void perimetru() = 0;
		Triunghi(double a = 0, double b = 0, double c = 0);
};
class Dreptunghic : public Triunghi {
	public :
		Dreptunghic(double a = 0, double b = 0, double c = 0);
		Dreptunghic(const Dreptunghic& dreptunghi);
		~Dreptunghic();
		void arie() override;
		void perimetru() override;
};
class Isoscel : public Triunghi {
	public :
		Isoscel(double a = 0, double b = 0, double c = 0);
		Isoscel(const Isoscel& ioscel);
		~Isoscel();
		void arie() override;
		void perimetru() override;

};

class DreptunghicIsoscel : public Dreptunghic, public Isoscel {
	public:
		DreptunghicIsoscel(double a = 0, double b = 0, double c = 0);
		DreptunghicIsoscel(const DreptunghicIsoscel& dris);
		~DreptunghicIsoscel();
		void arie() override;
		void perimetru() override;
};
class Echilateral : public Isoscel {
	public:
		Echilateral(double a = 0, double b = 0, double c = 0);
		Echilateral(const Echilateral& echi);
		~Echilateral();
		void arie() override;
		void perimetru() override;
};
#endif // !Triunghi_h
