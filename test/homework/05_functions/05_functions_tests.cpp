#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Function Get_GC_Content")
{
	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna1) == 0.375);
	REQUIRE(get_gc_content(dna2) == 0.5);
}

TEST_CASE("Test Function Get_Reverse_String")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test Function Get_DNA_Complement")
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}