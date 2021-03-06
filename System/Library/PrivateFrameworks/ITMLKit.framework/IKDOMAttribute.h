/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMAttribute.h>

@class NSString, IKDOMNode;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) IKDOMNode * ownerElement; 
-(id)removeChild:(id)arg1 ;
-(long long)nodeType;
-(NSString *)name;
-(id)nodeName;
-(id)childNodes;
-(id)textContent;
-(id)nextSibling;
-(id)previousSibling;
-(BOOL)dispatchEvent:(id)arg1 ;
-(id)lastChild;
-(NSString *)value;
-(id)firstChild;
-(id)appendChild:(id)arg1 ;
-(BOOL)hasChildNodes;
-(id)nodeValue;
-(IKDOMNode *)ownerElement;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(id)cloneNode:(BOOL)arg1 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
@end

