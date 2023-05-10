#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_JS = {{
//++Autogenerated -- start of section automatically generated
"Infinity NaN arguments async await break case catch class const continue debugger default delete do else export extends "
"false finally for function globalThis if import in instanceof let new null return static super switch "
"this throw true try typeof undefined var void while with yield "

, // 1 future reserved words
"enum implements interface package private protected public "

, // 2 directive
"__dirname __filename as export exports from import module require "

, // 3 class
"ActiveXObject AggregateError Array ArrayBuffer AsyncFunction AsyncGeneratorFunction Atomics "
"BigInt BigInt64Array BigUint64Array Boolean DataView Date Debug Document Enumerator Error EvalError EventTarget "
"FinalizationRegistry Float32Array Float64Array FormData Function GeneratorFunction Int16Array Int32Array Int8Array JSON "
"Map Math Number Object Promise Proxy RangeError ReferenceError Reflect RegExp "
"Set SharedArrayBuffer String Symbol SyntaxError TypeError URIError Uint16Array Uint32Array Uint8Array Uint8ClampedArray "
"VBArray WScript WeakMap WeakRef WeakSet Worker XMLHttpRequest "

, // 4 interface
NULL

, // 5 enumeration
NULL

, // 6 constant
"BYTES_PER_ELEMENT DONE E EPSILON HEADERS_RECEIVED LN10 LN2 LOADING LOG10E LOG2E "
"MAX_SAFE_INTEGER MAX_VALUE MIN_SAFE_INTEGER MIN_VALUE NEGATIVE_INFINITY OPENED PI POSITIVE_INFINITY SQRT1_2 SQRT2 "
"UNSENT "

, // 7 decorator
NULL

, // 8 function
"UTC( __defineGetter__( __defineSetter__( __lookupGetter__( __lookupSetter__( "
"abort( abs( acos( acosh( add( addEventListener( adoptNode( after( alert( all( allSettled( anchor( and( animate( any( "
"append( appendChild( apply( asIntN( asUintN( asin( asinh( assert( assign( "
"at( atEnd( atan( atan2( atanh( atob( attachShadow( "
"before( big( bind( blink( blur( bold( btoa( "
"call( catch( cbrt( ceil( charAt( charCodeAt( clear( clearInterval( clearTimeout( cloneNode( close( closest( clz32( "
"codePointAt( compareDocumentPosition( compareExchange( compile( concat( confirm( construct( contains( copyWithin( "
"cos( cosh( count( countReset( create( createAttribute( createAttributeNS( createCDATASection( createComment( "
"createDocumentFragment( createElement( createElementNS( createExpression( createImageBitmap( "
"createNSResolver( createNodeIterator( createProcessingInstruction( createRange( createTextNode( createTreeWalker( "
"debug( decodeURI( decodeURIComponent( defineProperties( defineProperty( delete( deleteProperty( deref( "
"dimensions( dir( dirxml( dispatchEvent( "
"elementFromPoint( elementsFromPoint( encodeURI( encodeURIComponent( endsWith( entries( error( escape( "
"eval( evaluate( every( exception( exchange( exec( exitFullscreen( exitPictureInPicture( exp( expm1( "
"fetch( fill( filter( finally( find( findIndex( findLast( findLastIndex( fixed( flat( flatMap( floor( "
"focus( fontcolor( fontsize( for( forEach( freeze( from( fromCharCode( fromCodePoint( fromEntries( fround( function( "
"get( getAll( getAllResponseHeaders( getAnimations( "
"getAttribute( getAttributeNS( getAttributeNames( getAttributeNode( getAttributeNodeNS( "
"getBigInt64( getBigUint64( getBoundingClientRect( getClientRects( getComputedStyle( getDate( getDay( "
"getElementById( getElementsByClassName( getElementsByName( getElementsByTagName( getElementsByTagNameNS( "
"getFloat32( getFloat64( getFullYear( getHours( getInt16( getInt32( getInt8( getItem( "
"getMilliseconds( getMinutes( getMonth( "
"getOwnPropertyDescriptor( getOwnPropertyDescriptors( getOwnPropertyNames( getOwnPropertySymbols( getPrototypeOf( "
"getResponseHeader( getRootNode( getSeconds( getSelection( getTime( getTimezoneOffset( "
"getUTCDate( getUTCDay( getUTCFullYear( getUTCHours( getUTCMilliseconds( getUTCMinutes( getUTCMonth( getUTCSeconds( "
"getUint16( getUint32( getUint8( getYear( group( groupCollapsed( groupEnd( "
"has( hasAttribute( hasAttributeNS( hasAttributes( hasChildNodes( hasFocus( hasOwn( hasOwnProperty( hasPointerCapture( "
"hypot( "
"import( importNode( importScripts( imul( "
"includes( indexOf( info( insertAdjacentElement( insertAdjacentHTML( insertAdjacentText( insertBefore( is( isArray( "
"isDefaultNamespace( isEqualNode( isExtensible( isFinite( isFrozen( isInteger( isLockFree( isNaN( isPrototypeOf( "
"isSafeInteger( isSameNode( isSealed( isView( italics( item( "
"join( key( keyFor( keys( "
"lastIndexOf( lbound( link( load( localeCompare( log( log10( log1p( log2( lookupNamespaceURI( lookupPrefix( "
"map( match( matchAll( matchMedia( matches( max( min( moveBy( moveFirst( moveNext( moveTo( next( normalize( now( "
"of( open( or( overrideMimeType( ownKeys( "
"padEnd( padStart( parse( parseFloat( parseInt( pop( postMessage( pow( "
"prepend( preventExtensions( print( prompt( propertyIsEnumerable( push( "
"querySelector( querySelectorAll( queueMicrotask( "
"race( random( raw( reduce( reduceRight( register( reject( releasePointerCapture( "
"remove( removeAttribute( removeAttributeNS( removeAttributeNode( removeChild( removeEventListener( removeItem( "
"repeat( replace( replaceAll( replaceChild( replaceChildren( replaceWith( reportError( "
"requestAnimationFrame( requestFullscreen( require( resizeBy( resizeTo( resolve( return( reverse( revocable( round( "
"scroll( scrollBy( scrollTo( seal( search( send( set( "
"setAttribute( setAttributeNS( setAttributeNode( setAttributeNodeNS( setBigInt64( setBigUint64( setDate( "
"setFloat32( setFloat64( setFullYear( setHours( setInt16( setInt32( setInt8( setInterval( setItem( "
"setMilliseconds( setMinutes( setMonth( setPointerCapture( setPrototypeOf( setRequestHeader( setSeconds( "
"setTime( setTimeout( "
"setUTCDate( setUTCFullYear( setUTCHours( setUTCMilliseconds( setUTCMinutes( setUTCMonth( setUTCSeconds( "
"setUint16( setUint32( setUint8( setYear( shift( showOpenFilePicker( showSaveFilePicker( sin( sinh( slice( small( "
"some( sort( splice( split( sqrt( startsWith( stop( store( strike( stringify( sub( subarray( substr( substring( sup( "
"table( tan( tanh( terminate( test( then( throw( time( timeEnd( timeLog( toArray( toDateString( toExponential( toFixed( "
"toGMTString( toISOString( toJSON( "
"toLocaleDateString( toLocaleLowerCase( toLocaleString( toLocaleTimeString( toLocaleUpperCase( toLowerCase( toPrecision( "
"toReversed( toSorted( toSpliced( toString( toTimeString( toUTCString( toUpperCase( toggleAttribute( "
"trace( trim( trimEnd( trimLeft( trimRight( trimStart( trunc( "
"ubound( unescape( unregister( unshift( valueOf( values( wait( wake( warn( with( write( writeln( xor( "

, // 9 properties
"URL __proto__ activeElement assignedSlot asyncIterator attributes baseURI body buffer byteLength byteOffset "
"caches cause characterSet childElementCount childNodes children "
"classList className clientHeight clientInformation clientLeft clientTop clientWidth closed console constructor cookie "
"crypto currentScript customElements "
"defaultView designMode devicePixelRatio dir doctype document documentElement documentURI domain dotAll embeds event "
"firstChild firstElementChild flags fonts forms frameElement frames fullScreen fullscreenElement global "
"hasInstance head hidden history "
"id ignoreCase images implementation indexedDB innerHTML innerHeight innerWidth isConcatSpreadable isConnected iterator "
"lastChild lastElementChild lastIndex lastModified length links localName localStorage location locationbar "
"match matchAll menubar message multiline "
"name namespaceURI navigator nextElementSibling nextSibling nodeName nodeType nodeValue "
"onreadystatechange opener origin outerHTML outerHeight outerWidth ownerDocument "
"pageXOffset pageYOffset parent parentElement parentNode part performance personalbar "
"pictureInPictureElement pictureInPictureEnabled plugins pointerLockElement "
"prefix previousElementSibling previousSibling prototype "
"readyState referrer replace response responseText responseType responseURL responseXML "
"scheduler screen screenLeft screenTop screenX screenY scripts "
"scrollHeight scrollLeft scrollTop scrollWidth scrollX scrollY scrollbars scrollingElement search self sessionStorage "
"shadowRoot size slot source species split status statusText statusbar sticky styleSheets "
"tagName textContent timeout title toPrimitive toStringTag toolbar top unicode unscopables upload "
"visibilityState visualViewport window withCredentials "

, // 10 JSDoc
"abstract access alias arg argument async augments author borrows "
"callback class classdesc const constant constructor constructs copyright "
"default defaultvalue deprecated desc description emits enum event example exception exports extends external "
"file fileoverview fires func function generator global hideconstructor host "
"ignore implements inheritdoc inner instance interface kind lends license link linkcode linkplain listens "
"member memberof method mixes mixin module name namespace override overview "
"package param private prop property protected public readonly requires return returns see since static summary "
"this throws todo tutorial type typedef var variation version virtual yield yields "

, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated

, // 15 Code Snippet
"for^() if^() switch^() while^() else^if^() else^{} use stric "
// typeof
"object boolean number string symbol bigint "
}};

static EDITSTYLE Styles_JS[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_JS_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_JS_WORD2, NP2StyleX_ReservedWord, L"fore:#B000B0" },
	{ SCE_JS_DIRECTIVE, NP2StyleX_Directive, L"fore:#FF8000" },
	{ SCE_JS_CLASS, NP2StyleX_Class, L"bold; fore:#0080C0" },
	{ SCE_JS_DECORATOR, NP2StyleX_Decorator, L"fore:#FF8000" },
	{ SCE_JS_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_JS_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_JS_CONSTANT, NP2StyleX_Constant, L"fore:#B000B0" },
	{ MULTI_STYLE(SCE_JS_COMMENTLINE, SCE_JS_COMMENTBLOCK, SCE_JS_HTMLCOMMENT, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_JS_COMMENTLINEDOC, SCE_JS_COMMENTBLOCKDOC, 0, 0), NP2StyleX_DocComment, L"fore:#408040" },
	{ MULTI_STYLE(SCE_JS_COMMENTTAGAT, SCE_JS_COMMENTTAGXML, 0, 0), NP2StyleX_DocCommentTag, L"fore:#408080" },
	{ SCE_JS_TASKMARKER, NP2StyleX_TaskMarker, L"bold; fore:#408080" },
	{ MULTI_STYLE(SCE_JS_STRING_SQ, SCE_JS_STRING_DQ, SCE_JSX_STRING_SQ, SCE_JSX_STRING_DQ), NP2StyleX_String, L"fore:#008000" },
	{ SCE_JS_STRING_BT, NP2StyleX_TemplateLiteral, L"fore:#F08000" },
	{ SCE_JS_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_JS_KEY, NP2StyleX_Property, L"fore:#648000" },
	{ SCE_JS_REGEX, NP2StyleX_Regex, L"fore:#006633; back:#FFF1A8" },
	{ SCE_JSX_TAG, NP2StyleX_XMLTag, L"fore:#648000" },
	{ MULTI_STYLE(SCE_JSX_ATTRIBUTE, SCE_JSX_ATTRIBUTE_AT, 0, 0), NP2StyleX_XMLAttribute, L"fore:#FF4000" },
	{ SCE_JS_LABEL, NP2StyleX_Label, L"back:#FFC040" },
	{ SCE_JS_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_JS_OPERATOR, SCE_JS_OPERATOR2, SCE_JS_OPERATOR_PF, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexJavaScript = {
	SCLEX_JAVASCRIPT, NP2LEX_JAVASCRIPT,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1) | (1 << 2), // class, anonymous object, method
		SCE_JS_FUNCTION_DEFINITION,
		'\\', SCE_JS_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_JS_OPERATOR, SCE_JS_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // future reserved words
		| KeywordAttr32(2, KeywordAttr_PreSorted) // directive
		| KeywordAttr32(3, KeywordAttr_PreSorted) // class
		| KeywordAttr32(6, KeywordAttr_PreSorted) // constant
		| KeywordAttr64(8, KeywordAttr_NoLexer) // function
		| KeywordAttr64(9, KeywordAttr_NoLexer) // properties
		| KeywordAttr64(10, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // JSDoc
		, SCE_JS_TASKMARKER,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"JavaScript", Styles_JS),
	L"js; jse; jsm; jsx; cjs; mjs; qs",
	&Keywords_JS,
	Styles_JS
};
