// implementation of class DArray
#include "DArray.h"

// default constructor
DArray::DArray() {
	Init();
}

// set an array with default values
DArray::DArray(int nSize, double dValue) {
	//TODO
	m_nSize = nSize;
	for (int i = 0; i < m_nSize; i++)
	{
		m_pData[i] = dValue;
	}
}

DArray::DArray(const DArray& arr) {
	//TODO
	m_nSize = arr.m_nSize;

	m_pData = new double[m_nSize];
	for (int i = 0; i < m_nSize; i++)
	{
		m_pData[i] = arr.m_pData[i];
	}
}

// deconstructor
DArray::~DArray() {
	Free();
}

// display the elements of the array
void DArray::Print() const {
	//TODO
	if (m_nSize == 0)
	{
		return 0;
	}

	if (m_pData == nullptr)
	{
		return 0;
	}
	
	for (int i = 0; i < m_nSize; i++)
	{
		printf("%lf \n", m_pData[i]);
	}
}

// initilize the array
void DArray::Init() {
	//TODO
	m_nSize = 0;
	m_pData = nullptr;
	return 1;
}

// free the array
void DArray::Free() {
	//TODO
}

// get the size of the array
int DArray::GetSize() const {
	//TODO
	return 0;
}

// set the size of the array
void DArray::SetSize(int nSize) {
	//TODO
}

// get an element at an index
const double& DArray::GetAt(int nIndex) const {
	//TODO
	static double ERROR; // you should delete this line
	return ERROR;
}

// set the value of an element 
void DArray::SetAt(int nIndex, double dValue) {
	//TODO
}

// overload operator '[]'
const double& DArray::operator[](int nIndex) const {
	//TODO
	static double ERROR; // you should delete this line
	return ERROR;
}

// add a new element at the end of the array
void DArray::PushBack(double dValue) {
	//TODO
}

// delete an element at some index
void DArray::DeleteAt(int nIndex) {
	//TODO
}

// insert a new element at some index
void DArray::InsertAt(int nIndex, double dValue) {
	//TODO
}

// overload operator '='
DArray& DArray::operator = (const DArray& arr) {
	//TODO
	return *this;
}
