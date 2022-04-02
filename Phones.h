
#ifndef PHONES
#define PHONES

#include "Electronics.h"

class Phones : public Electronics {
public:
	Phones(const string & = "", const double& = 0.0, const string & = "", const string & = "", const vector<string> & = {}, const vector<int> & = {});

	void setSubcategoryName(const string&);
	string getSubcategoryName() const;

	void setModels(const vector<string>&);
	vector<string> getModels() const;

	void setModelPrizes(const vector<int>&);
	vector<int> getModelPrizes() const;

private:
	string subcategoryName;
	vector<string> models;
	vector<int> modelPrizes;
};

#endif // !PHONES