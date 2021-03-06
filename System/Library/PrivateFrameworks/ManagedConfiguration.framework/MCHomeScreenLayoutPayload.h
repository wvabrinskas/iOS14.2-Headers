/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCHomeScreenLayoutPayload : MCPayload {

	NSArray* _layout;

}

@property (nonatomic,retain) NSArray * layout;              //@synthesize layout=_layout - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(void)setLayout:(NSArray *)arg1 ;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)parseIconsArray:(id)arg1 allowFolders:(BOOL)arg2 outError:(id*)arg3 ;
-(id)payloadDescriptionKeyValueSections;
-(NSArray *)layout;
@end

