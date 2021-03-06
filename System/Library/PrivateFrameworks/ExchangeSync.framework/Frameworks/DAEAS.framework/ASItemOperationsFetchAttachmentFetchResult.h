/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, ASItemOperationsFetchAttachmentProperties;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {

	NSNumber* _status;
	NSString* _fileReference;
	ASItemOperationsFetchAttachmentProperties* _properties;

}

@property (nonatomic,retain) NSNumber * status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * fileReference;                                            //@synthesize fileReference=_fileReference - In the implementation block
@property (nonatomic,retain) ASItemOperationsFetchAttachmentProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(ASItemOperationsFetchAttachmentProperties *)properties;
-(void)setProperties:(ASItemOperationsFetchAttachmentProperties *)arg1 ;
-(void)setFileReference:(NSString *)arg1 ;
-(NSString *)fileReference;
@end

