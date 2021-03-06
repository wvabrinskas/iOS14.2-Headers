/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <libobjc.A.dylib/MKTransitItemIncidentView.h>

@class MKTransitItemIncidentView, NSString;

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell <MKTransitItemIncidentView> {

	MKTransitItemIncidentView* _incidentView;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureViews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)setPadBottom:(BOOL)arg1 ;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)_updateIncidentViewBottomOffset;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(BOOL)padBottom;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

