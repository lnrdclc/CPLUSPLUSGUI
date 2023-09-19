#pragma once

using namespace System;

public ref class StudentData {

	private: 
		String^ FirstName;
		String^ LastName;
		String^ Sex;
		String^ Strand;
	public:	
		void setCredentials(String^ afirstName, String^ alastName, String^ aSex, String^ aStrand) {
			FirstName = afirstName;
			LastName = alastName;
			Sex = aSex;
			Strand = aStrand;
		}
		String^ getFirstName() {
			return FirstName;
		}
		String^ getLastName() {
			return LastName;
		}
		String^ getFullName() {
			return FirstName + " " + LastName;
		}
		String^ getSex() {
			return Sex;
		}
		String^ getStrand() {
			return Strand;
		}

};