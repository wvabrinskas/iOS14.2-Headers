/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface SASymbol : NSObject {

	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _name;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)name;
-(unsigned long long)offsetIntoSegment;
-(unsigned long long)offsetIntoTextSegment;
@end

