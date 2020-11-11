/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSRegularExpression, NSString;

@interface _ECSubjectFormatterContext : NSObject {

	BOOL _prefixLastStrongDirectionalityIsLeftToRight;
	NSRegularExpression* _regex;
	NSString* _localizedPrefix;

}

@property (nonatomic,readonly) NSRegularExpression * regex;                                   //@synthesize regex=_regex - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPrefix;                               //@synthesize localizedPrefix=_localizedPrefix - In the implementation block
@property (nonatomic,readonly) BOOL prefixLastStrongDirectionalityIsLeftToRight;              //@synthesize prefixLastStrongDirectionalityIsLeftToRight=_prefixLastStrongDirectionalityIsLeftToRight - In the implementation block
-(NSRegularExpression *)regex;
-(id)initWithRegex:(id)arg1 localizedPrefix:(id)arg2 ;
-(NSString *)localizedPrefix;
-(BOOL)prefixLastStrongDirectionalityIsLeftToRight;
@end
