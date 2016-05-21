# include <iostream>
# include <string.h>

class band{
	protected:
		char name[30];
		int count;
		virtual int getcount() = 0;
		virtual char* getname() = 0;
};

class MetalBand : protected band{
	public:
		int musicians;
		int pyrotechnicians;
		MetalBand(int, int, int, char[]);
		void add();
		void addpyo();
		void remove();
		void removepyo();
		 int getcount(){
		 	return count;
		 }
		 char* getname(){
		 	return name;
		 }
		
		
};
MetalBand::MetalBand(int a, int b, int c, char d[])
{
	strcpy(name,d);
	this->count = a;
	this->musicians = b;
	this->pyrotechnicians = c;
}
void MetalBand::add()
{
	this->count = this->count + 1;
	this->musicians = this->musicians + 1;
}
void MetalBand::addpyo()
{
	this->count = this->count + 1;
	this->pyrotechnicians = this->pyrotechnicians + 1;
}

void MetalBand::remove()
{
	this->count = this->count - 1;
	this->musicians = this->musicians -1;
}
void MetalBand::removepyo()
{
	this->count = this->count - 1;
	this->pyrotechnicians = this->pyrotechnicians - 1;
}

class Symphony : protected band{
	public:
		int musicians;
		int conductor;
		Symphony (int , int , int, char[]);
		void add();
		void addconductor();
		void remove();
		void removeconductor();
		int getcount(){
			return count;
		}
		char* getname(){
		 	return name;
		 }
};

Symphony::Symphony(int a, int b, int c, char d[])
{
	strcpy(name,d);
	this->count = a;
	this->musicians = b;
	this->conductor = c;
}
void Symphony::add()
{
	this->count = this->count + 1;
	this->musicians = this->musicians + 1;	
}
void Symphony::addconductor()
{
	this->count = this->count + 1;
	this->conductor = this->conductor + 1;
}

void Symphony::remove()
{
	this->count = this->count - 1;
	this->musicians = this->musicians -1;
}

void Symphony::removeconductor()
{
	this->count = this->count - 1;
	this->conductor = this->conductor - 1;
}

class jazz : protected band{
	public:
		int musicians;
		jazz(int, char[]);
		int getcount(){
			return count;
		}
		char* getname(){
		 	return name;
		 }
		
};
jazz::jazz(int a, char c[])
{
	strcpy(this->name,c);
	this->count = a;
	this->musicians = a;
}

class Marching : protected band{
	public:
		int musicians;
		Marching(int, char[]);
		int getcount(){
			return count;
		}
		char* getname(){
		 	return name;
		 }
};
Marching::Marching(int a, char b[])
{
	strcpy(this->name, b);
	this->count = a;
	this->musicians = a;
}

int main (void)
{
	MetalBand a(3,3,0,"skillet");
	Symphony b(2,2,0,"Hello");
	jazz c(2,"World");
	Marching d(5, "Ancient March");
	std::cout << "Name : " << a.getname() <<"\n";
	std::cout << "musicians = " << a.musicians << "\n";
	std::cout << "pyrotechnicians = " <<a.pyrotechnicians << "\n";
	std::cout << "Count = " << a.getcount() << "\n";
	a.add();
	std::cout << "Name : " << a.getname() <<"\n";
	std::cout << "musicians = " << a.musicians << "\n";
	std::cout << "pyrotechnicians = " <<a.pyrotechnicians << "\n";
	std::cout << "Count = " << a.getcount() << "\n";
	a.addpyo();
	std::cout << "Name : " << a.getname() <<"\n";
	std::cout << "musicians = " << a.musicians << "\n";
	std::cout << "pyrotechnicians = " <<a.pyrotechnicians << "\n";
	std::cout << "Count = " << a.getcount() << "\n";
	a.remove();
	std::cout << "Name : " << a.getname() <<"\n";
	std::cout << "musicians = " << a.musicians << "\n";
	std::cout << "pyrotechnicians = " <<a.pyrotechnicians << "\n";
	std::cout << "Count = " << a.getcount() << "\n";
	
	std::cout << "\n\n\n";
	
	std::cout << "Name : " << b.getname() <<"\n";
	std::cout << "musicians = " << b.musicians << "\n";
	std::cout << "Conductor = " <<b.conductor << "\n";
	std::cout << "Count = " << b.getcount() << "\n";
	b.add();
	std::cout << "Name : " << b.getname() <<"\n";
	std::cout << "musicians = " << b.musicians << "\n";
	std::cout << "Conductor = " <<b.conductor << "\n";
	std::cout << "Count = " << b.getcount() << "\n";
	b.addconductor();
	std::cout << "Name : " << b.getname() <<"\n";
	std::cout << "musicians = " << b.musicians << "\n";
	std::cout << "Conductor = " <<b.conductor << "\n";
	std::cout << "Count = " << b.getcount() << "\n";
	b.remove();
	std::cout << "Name : " << b.getname() <<"\n";
	std::cout << "musicians = " << b.musicians << "\n";
	std::cout << "Conductor = " <<b.conductor << "\n";
	std::cout << "Count = " << b.getcount() << "\n";
	
	std::cout << "\n\n\n";
	std::cout << "Name : " << c.getname() <<"\n";
	std::cout << "musicians = " << c.musicians << "\n";
	std::cout << "Count = " << c.getcount() << "\n";
	
	std::cout << "\n\n\n";
	std::cout << "Name : " << d.getname() <<"\n";
	std::cout << "musicians = " << d.musicians << "\n";
	std::cout << "Count = " << d.getcount() << "\n";
	
	
	
}
