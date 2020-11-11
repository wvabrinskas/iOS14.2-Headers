/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JSContext, NSMutableArray, JSManagedValue;

@interface WFSyntaxHighlightingPluginManager : NSObject {

	JSContext* _context;
	NSMutableArray* _tokenLines;
	unsigned long long _minimumChangedLine;
	unsigned long long _maxChangedLine;
	JSManagedValue* _colorScheme;
	JSManagedValue* _highlightingPlugin;
	JSManagedValue* _syntaxPlugin;
	unsigned long long _syntaxHighlightingType;
	unsigned long long _syntaxHighlightingAppearance;

}

@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                    //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (assign,nonatomic) unsigned long long syntaxHighlightingAppearance;              //@synthesize syntaxHighlightingAppearance=_syntaxHighlightingAppearance - In the implementation block
-(id)defaultBackgroundColor;
-(id)init;
-(void)dealloc;
-(unsigned long long)syntaxHighlightingType;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(id)configurationFilesForAppearance:(unsigned long long)arg1 ;
-(void)setSyntaxHighlightingAppearance:(unsigned long long)arg1 ;
-(void)didAddLineAtIndex:(unsigned long long)arg1 ;
-(void)didRemoveLineAtIndex:(unsigned long long)arg1 ;
-(BOOL)didChangeLine:(unsigned long long)arg1 string:(id)arg2 ;
-(void)discardManagedReferencesForLineNumber:(unsigned long long)arg1 ;
-(void)highlightAllTokensWithCallback:(/*^block*/id)arg1 ;
-(void)loadPlugins;
-(void)reloadPlugins;
-(void)unloadPlugins;
-(id)loadPluginUsingConfigWithModuleName:(id)arg1 module:(id)arg2 ;
-(void)loadColorSchemePlugin;
-(void)loadHighlightingPlugin;
-(void)loadSyntaxPlugin;
-(id)defaultForegroundColor;
-(unsigned long long)syntaxHighlightingAppearance;
@end
