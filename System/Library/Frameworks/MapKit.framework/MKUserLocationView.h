/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {

	BOOL _selected;
	_MKUserLocationView* _mkUserLocationView;

}

@property (setter=_setMKUserLocationView:,getter=_mkUserLocationView,nonatomic,retain) _MKUserLocationView * mkUserLocationView;              //@synthesize mkUserLocationView=_mkUserLocationView - In the implementation block
-(void)setAnnotation:(id)arg1 ;
-(void)prepareForDisplay;
-(BOOL)isSelected;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(void)_setHeading:(double)arg1 ;
-(BOOL)_allowedToShowCallout;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(BOOL)_isStale;
-(void)_setMapType:(unsigned long long)arg1 ;
-(CGPoint)centerOffset;
-(double)_heading;
-(BOOL)_shouldInnerPulse;
-(BOOL)_shouldShowOuterRing;
-(id)_innerImageMask;
-(BOOL)_rotateInnerImageToMatchCourse;
-(double)_accuracyRingAlpha;
-(BOOL)_allowsPulse;
-(BOOL)_canShowHeadingIndicator;
-(BOOL)_shouldDisplayHeading;
-(BOOL)_allowsAccuracyRing;
-(double)_maxRadiusToShowAccuracyRing;
-(long long)_headingIndicatorStyle;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isDraggable;
-(id)_mkUserLocationView;
-(id)rightCalloutAccessoryView;
-(id)leftCalloutAccessoryView;
-(id)detailCalloutAccessoryView;
-(BOOL)canShowCallout;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(void)_updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)_locationManagerFailedToUpdateLocation;
-(void)_setShouldDisplayHeading:(BOOL)arg1 ;
-(void)_setCanShowHeadingIndicator:(BOOL)arg1 ;
-(void)_setHeadingIndicatorStyle:(long long)arg1 ;
-(void)_setAllowsPulse:(BOOL)arg1 ;
-(void)_setShouldInnerPulse:(BOOL)arg1 ;
-(void)_setShouldShowOuterRing:(BOOL)arg1 ;
-(void)_setAllowsAccuracyRing:(BOOL)arg1 ;
-(void)_setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(double)_puckAlpha;
-(void)_setPuckAlpha:(double)arg1 ;
-(void)_setAccuracyRingAlpha:(double)arg1 ;
-(void)_setPuckScale:(double)arg1 ;
-(void)_setInnerImageMask:(id)arg1 ;
-(void)_setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_setMKUserLocationView:(id)arg1 ;
-(UIEdgeInsets)_annotationTrackingInsets;
-(void)_setMapRotationRadians:(double)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_setMapDisplayStyle:(SCD_Struct_MK28)arg1 ;
-(float)_selectionPriority;
-(void)_updateFromMap;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setSelectionPriority:(float)arg1 ;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(void)prepareForReuse;
-(CGPoint)leftCalloutOffset;
-(CGPoint)rightCalloutOffset;
-(CGPoint)calloutOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(id)_lastLocation;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

