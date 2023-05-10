#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_ASY = {{
//++Autogenerated -- start of section automatically generated
"access and as atleast break continue controls curl cycle default do else explicit for from if import include "
"new newframe operator private public quote readable restricted return static struct tension this typedef unravel var "
"while "

, // 1 types
"arrowbar arrowbar3 bool curlSpecifier file frame guide guide3 int pair path path3 pen real string suffix "
"tensionSpecifier transform transform3 triple void "

, // 2 structs
"Label Legend Tension align arrowhead arrowhead3 bool3 bounds control coord coords2 coords3 filltype flatguide3 "
"interaction light margin margin3 marker material object patch picture position projection render "
"scaling scene side slice surface transformation tube "

, // 3 constants
"bp cm currentlight currentpen currentpicture currentprojection defaultpen false identity inch inches infinity invisible "
"mm null nullframe nullpath nullpen pi pt true undefined zeroTransform "

, // 4 functions
"abort( accel( add( alias( align( angle( animate( append( arclength( arcpoint( arctime( array( ascii( assert( asy( "
"attach( axialshade( azimuth( "
"basealign( bbox( beep( box( buildcycle( "
"clear( clip( close( cmyk( colatitude( colorless( colorspace( complement( concat( conj( controlSpecifier( convert( copy( "
"cross( crosshatch( cubicroots( curlSpecifier( cut( cyclic( "
"defaultpen( degrees( delete( diagonal( dir( dirSpecifier( dirtime( dot( draw( "
"ellipse( eof( eol( erase( error( exit( expi( extension( "
"fft( fill( filldraw( filloutside( fillrule( find( findall( firstcut( fit( fixedscaling( flush( font( fontsize( format( "
"functionshade( "
"getint( getpair( getreal( getstring( gettriple( gouraudshade( gray( hatch( hex( "
"identity( incircle( initialized( input( insert( inside( "
"interior( intersect( intersectionpoint( intersectionpoints( intersections( inverse( "
"lastcut( latitude( latticeshade( legend( length( linecap( linejoin( lineskip( linetype( linewidth( locale( longitude( "
"makepen( map( max( maxbound( maxtimes( midpoint( min( minbound( mintimes( miterlimit( nib( opacity( orient( output( "
"pad( pairs( piecewisestraight( point( polar( pop( postcontrol( postscript( precision( precontrol( prepend( push( "
"quadraticroots( "
"radialshade( radialshadedraw( radius( readline( realmult( reflect( relpoint( reltime( rename( replace( reverse( rfind( "
"rgb( rotate( roundbox( "
"saveline( scale( search( seconds( seek( seekeof( sequence( shift( shipout( size( slant( sleep( solve( sort( split( "
"straight( string( strokepath( subpath( substr( sum( system( "
"tell( tensionSpecifier( tensorshade( tex( texpreamble( texreset( time( times( transpose( tridiagonal( truepoint( "
"unfill( uniform( unit( unitsize( usepackage( usleep( windingnumber( write( xpart( xscale( ypart( yscale( zpart( "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated

, // 15 Code Snippet
"for^() if^() while^() else^if^() else^{} "
}};

static EDITSTYLE Styles_ASY[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_ASY_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_ASY_TYPE, NP2StyleX_Type, L"fore:#1E90FF" },
	{ SCE_ASY_STRUCT, NP2StyleX_Structure, L"bold; fore:#007F7F" },
	{ SCE_ASY_CONSTANT, NP2StyleX_Constant, L"fore:#307300" },
	{ SCE_ASY_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_ASY_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ MULTI_STYLE(SCE_ASY_COMMENTLINE, SCE_ASY_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_ASY_STRING_SQ, SCE_ASY_STRING_DQ, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ SCE_ASY_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_ASY_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_ASY_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexAsymptote = {
	SCLEX_ASYMPTOTE, NP2LEX_ASYMPTOTE,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // struct, function
		SCE_ASY_FUNCTION_DEFINITION,
		'\\', SCE_ASY_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_ASY_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // types
		| KeywordAttr32(2, KeywordAttr_PreSorted) // structs
		| KeywordAttr32(3, KeywordAttr_PreSorted) // constants
		| KeywordAttr32(4, KeywordAttr_NoLexer) // functions
		, SCE_ASY_TASKMARKER,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Asymptote Code", Styles_ASY),
	L"asy",
	&Keywords_ASY,
	Styles_ASY
};
