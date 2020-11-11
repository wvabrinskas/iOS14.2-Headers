/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTTodayResultsFetchDescriptor.h>

@class NSString;

@interface NTNoContentTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>

@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) Class descriptorsOperationClass; 
@property (nonatomic,readonly) Class fetchOperationClass; 
-(id)init;
-(id)placeholderSectionDescriptorsWithContentRequest:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(Class)fetchOperationClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)descriptorsOperationClass;
@end
