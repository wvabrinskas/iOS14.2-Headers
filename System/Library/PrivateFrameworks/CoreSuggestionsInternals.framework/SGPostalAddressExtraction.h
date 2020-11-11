/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SGPostalAddressComponents;

@interface SGPostalAddressExtraction : NSObject {

	NSString* _plainText;
	SGPostalAddressComponents* _components;

}

@property (nonatomic,readonly) NSString * plainText;                                //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * components;              //@synthesize components=_components - In the implementation block
-(SGPostalAddressComponents *)components;
-(NSString *)plainText;
-(id)initWithPlainText:(id)arg1 components:(id)arg2 ;
-(BOOL)hasExtraction;
@end
