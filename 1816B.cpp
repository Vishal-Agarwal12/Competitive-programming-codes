{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"start": {
		"prefix": "start",
		"body": [
		  "#include <bits/stdc++.h>",
		  "#define ll long long",
		  "using namespace std;",
		  "",
		  "void solve() {",
		  "    $1",
		  "}",
		  "",
		  "signed main()",
		  "{",
		  "    ios::sync_with_stdio(false);",
		  "    cin.tie(nullptr);",
		  "    ",
		  "    int t;",
		  "    cin>>t;",
		  "    while(t--) ",
		  "        solve();",
		  "",
		  "    return 0;",
		  "}",
		  "",
		  ""
		],
		"description": ""
	  }
}