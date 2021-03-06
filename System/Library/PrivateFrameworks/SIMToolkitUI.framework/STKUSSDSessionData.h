/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKUSSDSessionData : NSObject <BSXPCCoding> {

	BOOL _allowsResponse;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL allowsResponse;                 //@synthesize allowsResponse=_allowsResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)text;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)allowsResponse;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithText:(id)arg1 allowsResponse:(BOOL)arg2 ;
@end

