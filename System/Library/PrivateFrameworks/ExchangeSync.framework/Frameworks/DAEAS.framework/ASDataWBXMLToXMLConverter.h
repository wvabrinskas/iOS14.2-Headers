/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASWBXMLToXMLConverter.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSMutableData, NSString;

@interface ASDataWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate> {

	NSInputStream* _input;
	NSMutableData* _output;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)runSynchronously;
-(void)dealloc;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithWBXMLData:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3 ;
@end
