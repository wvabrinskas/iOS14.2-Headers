/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@class NSString, NSMutableArray;

@interface CIBurstImageStat : NSObject {

	float normalizedFocusScore;
	float normalizedSigma;
	float colorHistogram[1024];
	int numEntries;
	unsigned short aeMatrix[256];
	int dissimilarity;
	double timeReceived;
	double timestamp;
	void* projectionMemoryBlock;
	FastRegistration_Signatures* projectionSignature;
	SharpnessGridElement_t* sharpnessGrid;
	int gridWidth;
	int gridHeight;
	GridROI_t gridROI;
	GridROI_t smoothedROI;
	BOOL hasRegistrationData;
	float maxSkewness;
	float roiSize;
	BOOL exclude;
	BOOL AEStable;
	BOOL AFStable;
	BOOL emotionallyRejected;
	BOOL doLimitedSharpnessAndBlur;
	BOOL isGarbage;
	int orientation;
	int AEAverage;
	int AETarget;
	int temporalOrder;
	float avgHorzDiffY;
	float blurExtent;
	float imageScore;
	float actionScore;
	float registrationErrorX;
	float registrationErrorY;
	float registrationErrorIntegral;
	float actionClusteringScore;
	int numHWFaces;
	float tx;
	float ty;
	int _AEDelta;
	int _fullsizeJpegSize;
	int _version;
	NSString* imageId;
	NSMutableArray* faceStatArray;
	IOSurfaceRef _fullsizeJpegData;
	CGRect facesRoiRect;

}

@property (assign) NSString * imageId; 
@property (assign) int orientation; 
@property (assign) NSMutableArray * faceStatArray; 
@property (assign) BOOL exclude; 
@property (assign) BOOL AEStable; 
@property (assign) int AEAverage; 
@property (assign) int AETarget; 
@property (assign) BOOL AFStable; 
@property (assign) int temporalOrder; 
@property (assign) float avgHorzDiffY; 
@property (assign) float blurExtent; 
@property (assign) float imageScore; 
@property (assign) float actionScore; 
@property (assign) double timeReceived; 
@property (assign) double timestamp; 
@property (assign) float maxSkewness; 
@property (assign) float registrationErrorX; 
@property (assign) float registrationErrorY; 
@property (assign) float registrationErrorIntegral; 
@property (assign) float actionClusteringScore; 
@property (assign) BOOL hasRegistrationData; 
@property (assign) CGRect facesRoiRect; 
@property (assign) int numHWFaces; 
@property (assign) BOOL emotionallyRejected; 
@property (assign) BOOL doLimitedSharpnessAndBlur; 
@property (assign) float tx; 
@property (assign) float ty; 
@property (assign) BOOL isGarbage; 
@property (assign) float roiSize; 
@property (assign) int AEDelta;                                  //@synthesize AEDelta=_AEDelta - In the implementation block
@property (assign) IOSurfaceRef fullsizeJpegData;                //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) int fullsizeJpegSize;                         //@synthesize fullsizeJpegSize=_fullsizeJpegSize - In the implementation block
@property (assign) int version;                                  //@synthesize version=_version - In the implementation block
-(float)tx;
-(float)ty;
-(void)setVersion:(int)arg1 ;
-(NSMutableArray *)faceStatArray;
-(int)temporalOrder;
-(void)setFacesRoiRect:(CGRect)arg1 ;
-(void)setNumHWFaces:(int)arg1 ;
-(int)numHWFaces;
-(CGRect)facesRoiRect;
-(float)registrationErrorIntegral;
-(void)computeImageData:(id)arg1 faceIDCounts:(id)arg2 ;
-(void)setTemporalOrder:(int)arg1 ;
-(void)setTimeReceived:(double)arg1 ;
-(float)roiSize;
-(float)avgHorzDiffY;
-(void)setEmotionallyRejected:(BOOL)arg1 ;
-(float)blurExtent;
-(void)setImageScore:(float)arg1 ;
-(void)setActionScore:(float)arg1 ;
-(float)computeAEMatrixDifference:(id)arg1 ;
-(int)canRegister;
-(void)allocateMeanStdPingPongBuffers:(float*)arg1 :(float*)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)assignMeanStdBuffers:(float*)arg1 ;
-(void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3 ;
-(float)maxSkewness;
-(void)setMaxSkewness:(float)arg1 ;
-(float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2 ;
-(BOOL)doLimitedSharpnessAndBlur;
-(void)setIsGarbage:(BOOL)arg1 ;
-(BOOL)hasRegistrationData;
-(void)collapseSharpnessGrid;
-(void)flagAsGarbage;
-(float)registrationErrorX;
-(float)registrationErrorY;
-(float)imageScore;
-(float)computeScore:(float)arg1 ;
-(float)actionScore;
-(void)writeGridROI:(id)arg1 ;
-(BOOL)emotionallyRejected;
-(BOOL)exclude;
-(float)computeImageDistance:(id)arg1 ;
-(float)actionClusteringScore;
-(long long)compareImageOrder:(id)arg1 ;
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(GridROI_t)getSharpnessAndBlurLimits;
-(void)setAEDelta:(int)arg1 ;
-(void)setRegistrationErrorX:(float)arg1 ;
-(void)updateROI:(GridROI_t)arg1 ;
-(void)setRegistrationErrorY:(float)arg1 ;
-(void)setHasRegistrationData:(BOOL)arg1 ;
-(void)setRegistrationErrorIntegral:(float)arg1 ;
-(void)setActionClusteringScore:(float)arg1 ;
-(void)computeImageColorHistogram:(id)arg1 ;
-(void)computeImageSharpnessOnGrid:(id)arg1 ;
-(void)computeBlurStatsOnGrid:(id)arg1 ;
-(float)computeSmilePercentage;
-(void)computeImageProjections:(id)arg1 ;
-(float)computeFacialFocusScoreSum;
-(float)computeRuleOfThreeDistance;
-(int)setAEMatrix:(id)arg1 ;
-(void)setExclude:(BOOL)arg1 ;
-(void)computeAEMatrix:(id)arg1 ;
-(long long)compareImageStats:(id)arg1 ;
-(float*)colorHistogram;
-(void)setFaceStatArray:(NSMutableArray *)arg1 ;
-(void)setAEStable:(BOOL)arg1 ;
-(void)setAEAverage:(int)arg1 ;
-(void)setAETarget:(int)arg1 ;
-(void)setAFStable:(BOOL)arg1 ;
-(void)setAvgHorzDiffY:(float)arg1 ;
-(void)setBlurExtent:(float)arg1 ;
-(double)timeReceived;
-(void)setDoLimitedSharpnessAndBlur:(BOOL)arg1 ;
-(void)setRoiSize:(float)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(int)fullsizeJpegSize;
-(void)setFullsizeJpegSize:(int)arg1 ;
-(void)setTx:(float)arg1 ;
-(void)setTy:(float)arg1 ;
-(int)version;
-(NSString *)imageId;
-(int)AEDelta;
-(int)AETarget;
-(BOOL)AEStable;
-(BOOL)AFStable;
-(unsigned short*)aeMatrix;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isGarbage;
-(int)AEAverage;
-(int)orientation;
-(void)setImageId:(NSString *)arg1 ;
-(void)dealloc;
@end
