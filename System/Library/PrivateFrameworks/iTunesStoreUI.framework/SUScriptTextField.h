/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptFunction, NSString, WebScriptObject, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {

	SUScriptFunction* _shouldFocusFunction;
	NSString* _style;

}

@property (nonatomic,readonly) BOOL canBecomeFirstResponder; 
@property (retain) NSString * autocapitalizationType; 
@property (retain) NSString * autocorrectionType; 
@property (retain) NSString * keyboardType; 
@property (retain) NSString * placeholder; 
@property (retain) WebScriptObject * shouldFocusFunction; 
@property (readonly) NSString * style; 
@property (retain) NSString * value; 
@property (retain) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setAutocapitalizationType:(NSString *)arg1 ;
-(BOOL)blur;
-(BOOL)focus;
-(void)setKeyboardType:(NSString *)arg1 ;
-(void)setAutocorrectionType:(NSString *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(NSString *)autocapitalizationType;
-(NSString *)keyboardType;
-(NSNumber *)width;
-(id)init;
-(NSString *)autocorrectionType;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)_autocapitalizationType;
-(id)_autocorrectionType;
-(id)buttonItem;
-(id)_keyboardType;
-(NSString *)style;
-(NSString *)value;
-(double)_defaultWidth;
-(BOOL)canBecomeFirstResponder;
-(id)_className;
-(void)setValue:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSString *)placeholder;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithTextFieldStyle:(id)arg1 ;
-(BOOL)_styleIsValid:(id)arg1 ;
-(id)_boxedNativeTextField;
-(id)_copyPlaceholder;
-(id)_copyValue;
-(id)_newTextField;
-(void)setNativeObjectWithBarButtonItem:(id)arg1 ;
-(void)setNativeObjectWithSearchBar:(id)arg1 ;
-(void)setNativeObjectWithTextField:(id)arg1 ;
-(void)setShouldFocusFunction:(WebScriptObject *)arg1 ;
-(WebScriptObject *)shouldFocusFunction;
@end
