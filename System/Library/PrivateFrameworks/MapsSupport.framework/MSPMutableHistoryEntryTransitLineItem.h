/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntryTransitLineItem.h>

@class NSDate, NSString;

@interface MSPMutableHistoryEntryTransitLineItem : MSPMutableHistoryEntry <MSPHistoryEntryTransitLineItem>

@property (nonatomic,retain) id<GEOTransitLineItem> lineItem; 
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(id)initWithStorage:(id)arg1 ;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
@end
